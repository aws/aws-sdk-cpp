/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>The requested resource could not be found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_TIMESTREAMQUERY_API ResourceNotFoundException();
    AWS_TIMESTREAMQUERY_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline const Aws::String& GetScheduledQueryArn() const{ return m_scheduledQueryArn; }

    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline bool ScheduledQueryArnHasBeenSet() const { return m_scheduledQueryArnHasBeenSet; }

    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline void SetScheduledQueryArn(const Aws::String& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = value; }

    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline void SetScheduledQueryArn(Aws::String&& value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn = std::move(value); }

    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline void SetScheduledQueryArn(const char* value) { m_scheduledQueryArnHasBeenSet = true; m_scheduledQueryArn.assign(value); }

    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline ResourceNotFoundException& WithScheduledQueryArn(const Aws::String& value) { SetScheduledQueryArn(value); return *this;}

    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline ResourceNotFoundException& WithScheduledQueryArn(Aws::String&& value) { SetScheduledQueryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the scheduled query.</p>
     */
    inline ResourceNotFoundException& WithScheduledQueryArn(const char* value) { SetScheduledQueryArn(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_scheduledQueryArn;
    bool m_scheduledQueryArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
