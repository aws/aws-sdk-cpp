/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ExceptionResourceType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A limit is exceeded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LimitExceededException">AWS
   * API Reference</a></p>
   */
  class LimitExceededException
  {
  public:
    AWS_QUICKSIGHT_API LimitExceededException();
    AWS_QUICKSIGHT_API LimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline LimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline LimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline LimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Limit exceeded.</p>
     */
    inline const ExceptionResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Limit exceeded.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Limit exceeded.</p>
     */
    inline void SetResourceType(const ExceptionResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Limit exceeded.</p>
     */
    inline void SetResourceType(ExceptionResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Limit exceeded.</p>
     */
    inline LimitExceededException& WithResourceType(const ExceptionResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>Limit exceeded.</p>
     */
    inline LimitExceededException& WithResourceType(ExceptionResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline LimitExceededException& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline LimitExceededException& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this request.</p>
     */
    inline LimitExceededException& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ExceptionResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
