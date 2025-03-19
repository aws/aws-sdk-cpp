/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>The value used for mapping a specified attribute to an identity source. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/attributemappingsconcept.html">Attribute
   * mappings</a> in the <i>IAM Identity Center User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AccessControlAttributeValue">AWS
   * API Reference</a></p>
   */
  class AccessControlAttributeValue
  {
  public:
    AWS_SSOADMIN_API AccessControlAttributeValue() = default;
    AWS_SSOADMIN_API AccessControlAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AccessControlAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identity source to use when mapping a specified attribute to IAM Identity
     * Center.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::Vector<Aws::String>>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::Vector<Aws::String>>
    AccessControlAttributeValue& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    template<typename SourceT = Aws::String>
    AccessControlAttributeValue& AddSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source.emplace_back(std::forward<SourceT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
