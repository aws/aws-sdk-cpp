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
    AWS_VPCLATTICE_API PathMatch();
    AWS_VPCLATTICE_API PathMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API PathMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the match is case sensitive. Defaults to false.</p>
     */
    inline bool GetCaseSensitive() const{ return m_caseSensitive; }

    /**
     * <p>Indicates whether the match is case sensitive. Defaults to false.</p>
     */
    inline bool CaseSensitiveHasBeenSet() const { return m_caseSensitiveHasBeenSet; }

    /**
     * <p>Indicates whether the match is case sensitive. Defaults to false.</p>
     */
    inline void SetCaseSensitive(bool value) { m_caseSensitiveHasBeenSet = true; m_caseSensitive = value; }

    /**
     * <p>Indicates whether the match is case sensitive. Defaults to false.</p>
     */
    inline PathMatch& WithCaseSensitive(bool value) { SetCaseSensitive(value); return *this;}


    /**
     * <p>The type of path match.</p>
     */
    inline const PathMatchType& GetMatch() const{ return m_match; }

    /**
     * <p>The type of path match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>The type of path match.</p>
     */
    inline void SetMatch(const PathMatchType& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>The type of path match.</p>
     */
    inline void SetMatch(PathMatchType&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>The type of path match.</p>
     */
    inline PathMatch& WithMatch(const PathMatchType& value) { SetMatch(value); return *this;}

    /**
     * <p>The type of path match.</p>
     */
    inline PathMatch& WithMatch(PathMatchType&& value) { SetMatch(std::move(value)); return *this;}

  private:

    bool m_caseSensitive;
    bool m_caseSensitiveHasBeenSet = false;

    PathMatchType m_match;
    bool m_matchHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
