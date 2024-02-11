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
    AWS_QBUSINESS_API AttachmentsConfiguration();
    AWS_QBUSINESS_API AttachmentsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AttachmentsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status information about whether file upload functionality is activated or
     * deactivated for your end user.</p>
     */
    inline const AttachmentsControlMode& GetAttachmentsControlMode() const{ return m_attachmentsControlMode; }

    /**
     * <p>Status information about whether file upload functionality is activated or
     * deactivated for your end user.</p>
     */
    inline bool AttachmentsControlModeHasBeenSet() const { return m_attachmentsControlModeHasBeenSet; }

    /**
     * <p>Status information about whether file upload functionality is activated or
     * deactivated for your end user.</p>
     */
    inline void SetAttachmentsControlMode(const AttachmentsControlMode& value) { m_attachmentsControlModeHasBeenSet = true; m_attachmentsControlMode = value; }

    /**
     * <p>Status information about whether file upload functionality is activated or
     * deactivated for your end user.</p>
     */
    inline void SetAttachmentsControlMode(AttachmentsControlMode&& value) { m_attachmentsControlModeHasBeenSet = true; m_attachmentsControlMode = std::move(value); }

    /**
     * <p>Status information about whether file upload functionality is activated or
     * deactivated for your end user.</p>
     */
    inline AttachmentsConfiguration& WithAttachmentsControlMode(const AttachmentsControlMode& value) { SetAttachmentsControlMode(value); return *this;}

    /**
     * <p>Status information about whether file upload functionality is activated or
     * deactivated for your end user.</p>
     */
    inline AttachmentsConfiguration& WithAttachmentsControlMode(AttachmentsControlMode&& value) { SetAttachmentsControlMode(std::move(value)); return *this;}

  private:

    AttachmentsControlMode m_attachmentsControlMode;
    bool m_attachmentsControlModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
