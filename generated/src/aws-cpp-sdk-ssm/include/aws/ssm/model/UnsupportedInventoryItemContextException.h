/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The <code>Context</code> attribute that you specified for the
   * <code>InventoryItem</code> isn't allowed for this inventory type. You can only
   * use the <code>Context</code> attribute with inventory types like
   * <code>AWS:ComplianceItem</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/UnsupportedInventoryItemContextException">AWS
   * API Reference</a></p>
   */
  class UnsupportedInventoryItemContextException
  {
  public:
    AWS_SSM_API UnsupportedInventoryItemContextException() = default;
    AWS_SSM_API UnsupportedInventoryItemContextException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API UnsupportedInventoryItemContextException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    UnsupportedInventoryItemContextException& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UnsupportedInventoryItemContextException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
