////////////////////////////////////////////////////////////////////////
// This file is part of Grappa, a system for scaling irregular
// applications on commodity clusters. 

// Copyright (C) 2010-2014 University of Washington and Battelle
// Memorial Institute. University of Washington authorizes use of this
// Grappa software.

// Grappa is free software: you can redistribute it and/or modify it
// under the terms of the Affero General Public License as published
// by Affero, Inc., either version 1 of the License, or (at your
// option) any later version.

// Grappa is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// Affero General Public License for more details.

// You should have received a copy of the Affero General Public
// License along with this program. If not, you may obtain one from
// http://www.affero.org/oagpl.html.
////////////////////////////////////////////////////////////////////////


enum npb_class                  {  S,  W,  A,  B,  C,  D, None = -1 };
static const int NKEY_LOG2[]    = { 16, 20, 23, 25, 27, 29 };
static const int MAX_KEY_LOG2[] = { 11, 16, 19, 21, 23, 27 };
static const int NBUCKET_LOG2[] = { 10, 10, 10, 10, 10, 10 };

inline npb_class get_npb_class(char c) {
  switch (c) {
    case 'S': return S;
    case 'W': return W;
    case 'A': return A;
    case 'B': return B;
    case 'C': return C;
    case 'D': return D;
    default: return None;
  }
}

