/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AttributeFilter.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Specifies filters to apply to an allowed action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ActionFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class ActionFilterConfiguration
  {
  public:
    AWS_QBUSINESS_API ActionFilterConfiguration() = default;
    AWS_QBUSINESS_API ActionFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ActionFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AttributeFilter& GetDocumentAttributeFilter() const { return m_documentAttributeFilter; }
    inline bool DocumentAttributeFilterHasBeenSet() const { return m_documentAttributeFilterHasBeenSet; }
    template<typename DocumentAttributeFilterT = AttributeFilter>
    void SetDocumentAttributeFilter(DocumentAttributeFilterT&& value) { m_documentAttributeFilterHasBeenSet = true; m_documentAttributeFilter = std::forward<DocumentAttributeFilterT>(value); }
    template<typename DocumentAttributeFilterT = AttributeFilter>
    ActionFilterConfiguration& WithDocumentAttributeFilter(DocumentAttributeFilterT&& value) { SetDocumentAttributeFilter(std::forward<DocumentAttributeFilterT>(value)); return *this;}
    ///@}
  private:

    AttributeFilter m_documentAttributeFilter;
    bool m_documentAttributeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
