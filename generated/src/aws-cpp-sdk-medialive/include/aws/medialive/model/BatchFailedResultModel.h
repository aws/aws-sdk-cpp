/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Details from a failed operation<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchFailedResultModel">AWS
   * API Reference</a></p>
   */
  class BatchFailedResultModel
  {
  public:
    AWS_MEDIALIVE_API BatchFailedResultModel();
    AWS_MEDIALIVE_API BatchFailedResultModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BatchFailedResultModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * ARN of the resource
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * ARN of the resource
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * ARN of the resource
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * ARN of the resource
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * ARN of the resource
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * ARN of the resource
     */
    inline BatchFailedResultModel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * ARN of the resource
     */
    inline BatchFailedResultModel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * ARN of the resource
     */
    inline BatchFailedResultModel& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * Error code for the failed operation
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * Error code for the failed operation
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * Error code for the failed operation
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * Error code for the failed operation
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * Error code for the failed operation
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * Error code for the failed operation
     */
    inline BatchFailedResultModel& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * Error code for the failed operation
     */
    inline BatchFailedResultModel& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * Error code for the failed operation
     */
    inline BatchFailedResultModel& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * ID of the resource
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * ID of the resource
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * ID of the resource
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * ID of the resource
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * ID of the resource
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * ID of the resource
     */
    inline BatchFailedResultModel& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * ID of the resource
     */
    inline BatchFailedResultModel& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * ID of the resource
     */
    inline BatchFailedResultModel& WithId(const char* value) { SetId(value); return *this;}


    /**
     * Error message for the failed operation
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * Error message for the failed operation
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * Error message for the failed operation
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * Error message for the failed operation
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * Error message for the failed operation
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * Error message for the failed operation
     */
    inline BatchFailedResultModel& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * Error message for the failed operation
     */
    inline BatchFailedResultModel& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * Error message for the failed operation
     */
    inline BatchFailedResultModel& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
