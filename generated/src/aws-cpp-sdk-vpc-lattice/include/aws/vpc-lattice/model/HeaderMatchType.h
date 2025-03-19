/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Describes a header match type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/HeaderMatchType">AWS
   * API Reference</a></p>
   */
  class HeaderMatchType
  {
  public:
    AWS_VPCLATTICE_API HeaderMatchType() = default;
    AWS_VPCLATTICE_API HeaderMatchType(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API HeaderMatchType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A contains type match.</p>
     */
    inline const Aws::String& GetContains() const { return m_contains; }
    inline bool ContainsHasBeenSet() const { return m_containsHasBeenSet; }
    template<typename ContainsT = Aws::String>
    void SetContains(ContainsT&& value) { m_containsHasBeenSet = true; m_contains = std::forward<ContainsT>(value); }
    template<typename ContainsT = Aws::String>
    HeaderMatchType& WithContains(ContainsT&& value) { SetContains(std::forward<ContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An exact type match.</p>
     */
    inline const Aws::String& GetExact() const { return m_exact; }
    inline bool ExactHasBeenSet() const { return m_exactHasBeenSet; }
    template<typename ExactT = Aws::String>
    void SetExact(ExactT&& value) { m_exactHasBeenSet = true; m_exact = std::forward<ExactT>(value); }
    template<typename ExactT = Aws::String>
    HeaderMatchType& WithExact(ExactT&& value) { SetExact(std::forward<ExactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix type match. Matches the value with the prefix.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    HeaderMatchType& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contains;
    bool m_containsHasBeenSet = false;

    Aws::String m_exact;
    bool m_exactHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
