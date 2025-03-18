/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>The operation is already in progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DuplicateRequest">AWS
   * API Reference</a></p>
   */
  class DuplicateRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API DuplicateRequest() = default;
    AWS_SERVICEDISCOVERY_API DuplicateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API DuplicateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DuplicateRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline const Aws::String& GetDuplicateOperationId() const { return m_duplicateOperationId; }
    inline bool DuplicateOperationIdHasBeenSet() const { return m_duplicateOperationIdHasBeenSet; }
    template<typename DuplicateOperationIdT = Aws::String>
    void SetDuplicateOperationId(DuplicateOperationIdT&& value) { m_duplicateOperationIdHasBeenSet = true; m_duplicateOperationId = std::forward<DuplicateOperationIdT>(value); }
    template<typename DuplicateOperationIdT = Aws::String>
    DuplicateRequest& WithDuplicateOperationId(DuplicateOperationIdT&& value) { SetDuplicateOperationId(std::forward<DuplicateOperationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_duplicateOperationId;
    bool m_duplicateOperationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
