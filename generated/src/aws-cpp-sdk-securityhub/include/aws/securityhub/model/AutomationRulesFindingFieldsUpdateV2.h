/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Allows you to define the structure for modifying specific fields in security
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesFindingFieldsUpdateV2">AWS
   * API Reference</a></p>
   */
  class AutomationRulesFindingFieldsUpdateV2
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdateV2() = default;
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdateV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesFindingFieldsUpdateV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The severity level to be assigned to findings that match the automation rule
     * criteria.</p>
     */
    inline int GetSeverityId() const { return m_severityId; }
    inline bool SeverityIdHasBeenSet() const { return m_severityIdHasBeenSet; }
    inline void SetSeverityId(int value) { m_severityIdHasBeenSet = true; m_severityId = value; }
    inline AutomationRulesFindingFieldsUpdateV2& WithSeverityId(int value) { SetSeverityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notes or contextual information for findings that are modified by the
     * automation rule.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    AutomationRulesFindingFieldsUpdateV2& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to be applied to findings that match automation rule criteria.</p>
     */
    inline int GetStatusId() const { return m_statusId; }
    inline bool StatusIdHasBeenSet() const { return m_statusIdHasBeenSet; }
    inline void SetStatusId(int value) { m_statusIdHasBeenSet = true; m_statusId = value; }
    inline AutomationRulesFindingFieldsUpdateV2& WithStatusId(int value) { SetStatusId(value); return *this;}
    ///@}
  private:

    int m_severityId{0};
    bool m_severityIdHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    int m_statusId{0};
    bool m_statusIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
