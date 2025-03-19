/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>A single mapping entry for each supported specifier or
   * sub-field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/MappingRule">AWS
   * API Reference</a></p>
   */
  class MappingRule
  {
  public:
    AWS_ROLESANYWHERE_API MappingRule() = default;
    AWS_ROLESANYWHERE_API MappingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API MappingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifier within a certificate field, such as CN, OU, or UID from the Subject
     * field.</p>
     */
    inline const Aws::String& GetSpecifier() const { return m_specifier; }
    inline bool SpecifierHasBeenSet() const { return m_specifierHasBeenSet; }
    template<typename SpecifierT = Aws::String>
    void SetSpecifier(SpecifierT&& value) { m_specifierHasBeenSet = true; m_specifier = std::forward<SpecifierT>(value); }
    template<typename SpecifierT = Aws::String>
    MappingRule& WithSpecifier(SpecifierT&& value) { SetSpecifier(std::forward<SpecifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_specifier;
    bool m_specifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
