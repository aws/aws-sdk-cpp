/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Alert configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Alert">AWS
   * API Reference</a></p>
   */
  class Alert
  {
  public:
    AWS_MEDIATAILOR_API Alert();
    AWS_MEDIATAILOR_API Alert(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Alert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline const Aws::String& GetAlertCode() const{ return m_alertCode; }

    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline bool AlertCodeHasBeenSet() const { return m_alertCodeHasBeenSet; }

    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline void SetAlertCode(const Aws::String& value) { m_alertCodeHasBeenSet = true; m_alertCode = value; }

    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline void SetAlertCode(Aws::String&& value) { m_alertCodeHasBeenSet = true; m_alertCode = std::move(value); }

    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline void SetAlertCode(const char* value) { m_alertCodeHasBeenSet = true; m_alertCode.assign(value); }

    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline Alert& WithAlertCode(const Aws::String& value) { SetAlertCode(value); return *this;}

    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline Alert& WithAlertCode(Aws::String&& value) { SetAlertCode(std::move(value)); return *this;}

    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline Alert& WithAlertCode(const char* value) { SetAlertCode(value); return *this;}


    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline const Aws::String& GetAlertMessage() const{ return m_alertMessage; }

    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline bool AlertMessageHasBeenSet() const { return m_alertMessageHasBeenSet; }

    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline void SetAlertMessage(const Aws::String& value) { m_alertMessageHasBeenSet = true; m_alertMessage = value; }

    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline void SetAlertMessage(Aws::String&& value) { m_alertMessageHasBeenSet = true; m_alertMessage = std::move(value); }

    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline void SetAlertMessage(const char* value) { m_alertMessageHasBeenSet = true; m_alertMessage.assign(value); }

    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline Alert& WithAlertMessage(const Aws::String& value) { SetAlertMessage(value); return *this;}

    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline Alert& WithAlertMessage(Aws::String&& value) { SetAlertMessage(std::move(value)); return *this;}

    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline Alert& WithAlertMessage(const char* value) { SetAlertMessage(value); return *this;}


    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline Alert& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline Alert& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedResourceArns() const{ return m_relatedResourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline bool RelatedResourceArnsHasBeenSet() const { return m_relatedResourceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline void SetRelatedResourceArns(const Aws::Vector<Aws::String>& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline void SetRelatedResourceArns(Aws::Vector<Aws::String>&& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline Alert& WithRelatedResourceArns(const Aws::Vector<Aws::String>& value) { SetRelatedResourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline Alert& WithRelatedResourceArns(Aws::Vector<Aws::String>&& value) { SetRelatedResourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline Alert& AddRelatedResourceArns(const Aws::String& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline Alert& AddRelatedResourceArns(Aws::String&& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline Alert& AddRelatedResourceArns(const char* value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Alert& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Alert& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Alert& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_alertCode;
    bool m_alertCodeHasBeenSet = false;

    Aws::String m_alertMessage;
    bool m_alertMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedResourceArns;
    bool m_relatedResourceArnsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
