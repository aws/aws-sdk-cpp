/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/PathMatchType.h>
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
   * <p>Describes the conditions that can be applied when matching a path for
   * incoming requests.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/PathMatch">AWS
   * API Reference</a></p>
   */
  class PathMatch
  {
  public:
    AWS_VPCLATTICE_API PathMatch() = default;
    AWS_VPCLATTICE_API PathMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API PathMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the match is case sensitive.</p>
     */
    inline bool GetCaseSensitive() const { return m_caseSensitive; }
    inline bool CaseSensitiveHasBeenSet() const { return m_caseSensitiveHasBeenSet; }
    inline void SetCaseSensitive(bool value) { m_caseSensitiveHasBeenSet = true; m_caseSensitive = value; }
    inline PathMatch& WithCaseSensitive(bool value) { SetCaseSensitive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of path match.</p>
     */
    inline const PathMatchType& GetMatch() const { return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    template<typename MatchT = PathMatchType>
    void SetMatch(MatchT&& value) { m_matchHasBeenSet = true; m_match = std::forward<MatchT>(value); }
    template<typename MatchT = PathMatchType>
    PathMatch& WithMatch(MatchT&& value) { SetMatch(std::forward<MatchT>(value)); return *this;}
    ///@}
  private:

    bool m_caseSensitive{false};
    bool m_caseSensitiveHasBeenSet = false;

    PathMatchType m_match;
    bool m_matchHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
