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
   * <p>The OpsItem already exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class OpsItemAlreadyExistsException
  {
  public:
    AWS_SSM_API OpsItemAlreadyExistsException() = default;
    AWS_SSM_API OpsItemAlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemAlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    OpsItemAlreadyExistsException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetOpsItemId() const { return m_opsItemId; }
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }
    template<typename OpsItemIdT = Aws::String>
    void SetOpsItemId(OpsItemIdT&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::forward<OpsItemIdT>(value); }
    template<typename OpsItemIdT = Aws::String>
    OpsItemAlreadyExistsException& WithOpsItemId(OpsItemIdT&& value) { SetOpsItemId(std::forward<OpsItemIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
