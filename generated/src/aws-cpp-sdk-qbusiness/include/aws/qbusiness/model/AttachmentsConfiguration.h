/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AttachmentsControlMode.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information for the file upload during chat
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AttachmentsConfiguration">AWS
   * API Reference</a></p>
   */
  class AttachmentsConfiguration
  {
  public:
    AWS_QBUSINESS_API AttachmentsConfiguration() = default;
    AWS_QBUSINESS_API AttachmentsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AttachmentsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status information about whether file upload functionality is activated or
     * deactivated for your end user.</p>
     */
    inline AttachmentsControlMode GetAttachmentsControlMode() const { return m_attachmentsControlMode; }
    inline bool AttachmentsControlModeHasBeenSet() const { return m_attachmentsControlModeHasBeenSet; }
    inline void SetAttachmentsControlMode(AttachmentsControlMode value) { m_attachmentsControlModeHasBeenSet = true; m_attachmentsControlMode = value; }
    inline AttachmentsConfiguration& WithAttachmentsControlMode(AttachmentsControlMode value) { SetAttachmentsControlMode(value); return *this;}
    ///@}
  private:

    AttachmentsControlMode m_attachmentsControlMode{AttachmentsControlMode::NOT_SET};
    bool m_attachmentsControlModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
