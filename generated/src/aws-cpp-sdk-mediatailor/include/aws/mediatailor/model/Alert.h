/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/AlertCategory.h>
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


    ///@{
    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline const Aws::String& GetAlertCode() const{ return m_alertCode; }
    inline bool AlertCodeHasBeenSet() const { return m_alertCodeHasBeenSet; }
    inline void SetAlertCode(const Aws::String& value) { m_alertCodeHasBeenSet = true; m_alertCode = value; }
    inline void SetAlertCode(Aws::String&& value) { m_alertCodeHasBeenSet = true; m_alertCode = std::move(value); }
    inline void SetAlertCode(const char* value) { m_alertCodeHasBeenSet = true; m_alertCode.assign(value); }
    inline Alert& WithAlertCode(const Aws::String& value) { SetAlertCode(value); return *this;}
    inline Alert& WithAlertCode(Aws::String&& value) { SetAlertCode(std::move(value)); return *this;}
    inline Alert& WithAlertCode(const char* value) { SetAlertCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline const Aws::String& GetAlertMessage() const{ return m_alertMessage; }
    inline bool AlertMessageHasBeenSet() const { return m_alertMessageHasBeenSet; }
    inline void SetAlertMessage(const Aws::String& value) { m_alertMessageHasBeenSet = true; m_alertMessage = value; }
    inline void SetAlertMessage(Aws::String&& value) { m_alertMessageHasBeenSet = true; m_alertMessage = std::move(value); }
    inline void SetAlertMessage(const char* value) { m_alertMessageHasBeenSet = true; m_alertMessage.assign(value); }
    inline Alert& WithAlertMessage(const Aws::String& value) { SetAlertMessage(value); return *this;}
    inline Alert& WithAlertMessage(Aws::String&& value) { SetAlertMessage(std::move(value)); return *this;}
    inline Alert& WithAlertMessage(const char* value) { SetAlertMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category that MediaTailor assigns to the alert.</p>
     */
    inline const AlertCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const AlertCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(AlertCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline Alert& WithCategory(const AlertCategory& value) { SetCategory(value); return *this;}
    inline Alert& WithCategory(AlertCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Alert& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Alert& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedResourceArns() const{ return m_relatedResourceArns; }
    inline bool RelatedResourceArnsHasBeenSet() const { return m_relatedResourceArnsHasBeenSet; }
    inline void SetRelatedResourceArns(const Aws::Vector<Aws::String>& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns = value; }
    inline void SetRelatedResourceArns(Aws::Vector<Aws::String>&& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns = std::move(value); }
    inline Alert& WithRelatedResourceArns(const Aws::Vector<Aws::String>& value) { SetRelatedResourceArns(value); return *this;}
    inline Alert& WithRelatedResourceArns(Aws::Vector<Aws::String>&& value) { SetRelatedResourceArns(std::move(value)); return *this;}
    inline Alert& AddRelatedResourceArns(const Aws::String& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns.push_back(value); return *this; }
    inline Alert& AddRelatedResourceArns(Aws::String&& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns.push_back(std::move(value)); return *this; }
    inline Alert& AddRelatedResourceArns(const char* value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Alert& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Alert& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Alert& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_alertCode;
    bool m_alertCodeHasBeenSet = false;

    Aws::String m_alertMessage;
    bool m_alertMessageHasBeenSet = false;

    AlertCategory m_category;
    bool m_categoryHasBeenSet = false;

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
