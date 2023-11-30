/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>User does not have sufficient access to perform this action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedException
  {
  public:
    AWS_AGREEMENTSERVICE_API AccessDeniedException();
    AWS_AGREEMENTSERVICE_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline AccessDeniedException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline AccessDeniedException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline AccessDeniedException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the error.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The unique identifier for the error.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The unique identifier for the error.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The unique identifier for the error.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The unique identifier for the error.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The unique identifier for the error.</p>
     */
    inline AccessDeniedException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The unique identifier for the error.</p>
     */
    inline AccessDeniedException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the error.</p>
     */
    inline AccessDeniedException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
