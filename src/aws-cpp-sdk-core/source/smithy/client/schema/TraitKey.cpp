#include <smithy/client/schema/TraitKey.h>

#include <atomic>

namespace smithy {
namespace schema {

static std::atomic<int> s_traitIdCounter{0};

int NextTraitKey() { return s_traitIdCounter.fetch_add(1, std::memory_order_relaxed); }
}  // namespace schema
}  // namespace smithy