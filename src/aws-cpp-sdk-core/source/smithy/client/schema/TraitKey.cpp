#include <smithy/client/schema/TraitKey.h>

namespace smithy {
namespace schema {

static int s_traitIdCounter = 0;

int NextTraitKey() { return s_traitIdCounter++; }
}  // namespace schema
}  // namespace smithy