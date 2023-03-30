/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/HttpMatch.h>
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
   * <p>Describes a rule match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/RuleMatch">AWS
   * API Reference</a></p>
   */
  class RuleMatch
  {
  public:
    AWS_VPCLATTICE_API RuleMatch();
    AWS_VPCLATTICE_API RuleMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API RuleMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTTP criteria that a rule must match.</p>
     */
    inline const HttpMatch& GetHttpMatch() const{ return m_httpMatch; }

    /**
     * <p>The HTTP criteria that a rule must match.</p>
     */
    inline bool HttpMatchHasBeenSet() const { return m_httpMatchHasBeenSet; }

    /**
     * <p>The HTTP criteria that a rule must match.</p>
     */
    inline void SetHttpMatch(const HttpMatch& value) { m_httpMatchHasBeenSet = true; m_httpMatch = value; }

    /**
     * <p>The HTTP criteria that a rule must match.</p>
     */
    inline void SetHttpMatch(HttpMatch&& value) { m_httpMatchHasBeenSet = true; m_httpMatch = std::move(value); }

    /**
     * <p>The HTTP criteria that a rule must match.</p>
     */
    inline RuleMatch& WithHttpMatch(const HttpMatch& value) { SetHttpMatch(value); return *this;}

    /**
     * <p>The HTTP criteria that a rule must match.</p>
     */
    inline RuleMatch& WithHttpMatch(HttpMatch&& value) { SetHttpMatch(std::move(value)); return *this;}

  private:

    HttpMatch m_httpMatch;
    bool m_httpMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
