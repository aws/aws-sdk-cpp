/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/AlertCategory.h>
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
    AWS_MEDIATAILOR_API Alert() = default;
    AWS_MEDIATAILOR_API Alert(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Alert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code for the alert. For example, <code>NOT_PROCESSED</code>.</p>
     */
    inline const Aws::String& GetAlertCode() const { return m_alertCode; }
    inline bool AlertCodeHasBeenSet() const { return m_alertCodeHasBeenSet; }
    template<typename AlertCodeT = Aws::String>
    void SetAlertCode(AlertCodeT&& value) { m_alertCodeHasBeenSet = true; m_alertCode = std::forward<AlertCodeT>(value); }
    template<typename AlertCodeT = Aws::String>
    Alert& WithAlertCode(AlertCodeT&& value) { SetAlertCode(std::forward<AlertCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an alert is generated for a resource, an explanation of the reason for the
     * alert.</p>
     */
    inline const Aws::String& GetAlertMessage() const { return m_alertMessage; }
    inline bool AlertMessageHasBeenSet() const { return m_alertMessageHasBeenSet; }
    template<typename AlertMessageT = Aws::String>
    void SetAlertMessage(AlertMessageT&& value) { m_alertMessageHasBeenSet = true; m_alertMessage = std::forward<AlertMessageT>(value); }
    template<typename AlertMessageT = Aws::String>
    Alert& WithAlertMessage(AlertMessageT&& value) { SetAlertMessage(std::forward<AlertMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the alert was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Alert& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) related to this alert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRelatedResourceArns() const { return m_relatedResourceArns; }
    inline bool RelatedResourceArnsHasBeenSet() const { return m_relatedResourceArnsHasBeenSet; }
    template<typename RelatedResourceArnsT = Aws::Vector<Aws::String>>
    void SetRelatedResourceArns(RelatedResourceArnsT&& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns = std::forward<RelatedResourceArnsT>(value); }
    template<typename RelatedResourceArnsT = Aws::Vector<Aws::String>>
    Alert& WithRelatedResourceArns(RelatedResourceArnsT&& value) { SetRelatedResourceArns(std::forward<RelatedResourceArnsT>(value)); return *this;}
    template<typename RelatedResourceArnsT = Aws::String>
    Alert& AddRelatedResourceArns(RelatedResourceArnsT&& value) { m_relatedResourceArnsHasBeenSet = true; m_relatedResourceArns.emplace_back(std::forward<RelatedResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    Alert& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category that MediaTailor assigns to the alert.</p>
     */
    inline AlertCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(AlertCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline Alert& WithCategory(AlertCategory value) { SetCategory(value); return *this;}
    ///@}
  private:

    Aws::String m_alertCode;
    bool m_alertCodeHasBeenSet = false;

    Aws::String m_alertMessage;
    bool m_alertMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_relatedResourceArns;
    bool m_relatedResourceArnsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    AlertCategory m_category{AlertCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
