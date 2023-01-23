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
    AWS_SERVICEDISCOVERY_API DuplicateRequest();
    AWS_SERVICEDISCOVERY_API DuplicateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API DuplicateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DuplicateRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DuplicateRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DuplicateRequest& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline const Aws::String& GetDuplicateOperationId() const{ return m_duplicateOperationId; }

    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline bool DuplicateOperationIdHasBeenSet() const { return m_duplicateOperationIdHasBeenSet; }

    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline void SetDuplicateOperationId(const Aws::String& value) { m_duplicateOperationIdHasBeenSet = true; m_duplicateOperationId = value; }

    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline void SetDuplicateOperationId(Aws::String&& value) { m_duplicateOperationIdHasBeenSet = true; m_duplicateOperationId = std::move(value); }

    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline void SetDuplicateOperationId(const char* value) { m_duplicateOperationIdHasBeenSet = true; m_duplicateOperationId.assign(value); }

    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline DuplicateRequest& WithDuplicateOperationId(const Aws::String& value) { SetDuplicateOperationId(value); return *this;}

    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline DuplicateRequest& WithDuplicateOperationId(Aws::String&& value) { SetDuplicateOperationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the operation that's already in progress.</p>
     */
    inline DuplicateRequest& WithDuplicateOperationId(const char* value) { SetDuplicateOperationId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_duplicateOperationId;
    bool m_duplicateOperationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
