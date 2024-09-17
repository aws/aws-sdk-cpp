/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/HeaderMatchType.h>
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
   * <p>Describes the constraints for a header match. Matches incoming requests with
   * rule based on request header value before applying rule action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/HeaderMatch">AWS
   * API Reference</a></p>
   */
  class HeaderMatch
  {
  public:
    AWS_VPCLATTICE_API HeaderMatch();
    AWS_VPCLATTICE_API HeaderMatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API HeaderMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the match is case sensitive.</p>
     */
    inline bool GetCaseSensitive() const{ return m_caseSensitive; }
    inline bool CaseSensitiveHasBeenSet() const { return m_caseSensitiveHasBeenSet; }
    inline void SetCaseSensitive(bool value) { m_caseSensitiveHasBeenSet = true; m_caseSensitive = value; }
    inline HeaderMatch& WithCaseSensitive(bool value) { SetCaseSensitive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The header match type.</p>
     */
    inline const HeaderMatchType& GetMatch() const{ return m_match; }
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }
    inline void SetMatch(const HeaderMatchType& value) { m_matchHasBeenSet = true; m_match = value; }
    inline void SetMatch(HeaderMatchType&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }
    inline HeaderMatch& WithMatch(const HeaderMatchType& value) { SetMatch(value); return *this;}
    inline HeaderMatch& WithMatch(HeaderMatchType&& value) { SetMatch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the header.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline HeaderMatch& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline HeaderMatch& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline HeaderMatch& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    bool m_caseSensitive;
    bool m_caseSensitiveHasBeenSet = false;

    HeaderMatchType m_match;
    bool m_matchHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
