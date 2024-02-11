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
   * <p>Configuration information about the file upload during chat feature for your
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AppliedAttachmentsConfiguration">AWS
   * API Reference</a></p>
   */
  class AppliedAttachmentsConfiguration
  {
  public:
    AWS_QBUSINESS_API AppliedAttachmentsConfiguration();
    AWS_QBUSINESS_API AppliedAttachmentsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AppliedAttachmentsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about whether file upload during chat functionality is activated
     * for your application.</p>
     */
    inline const AttachmentsControlMode& GetAttachmentsControlMode() const{ return m_attachmentsControlMode; }

    /**
     * <p>Information about whether file upload during chat functionality is activated
     * for your application.</p>
     */
    inline bool AttachmentsControlModeHasBeenSet() const { return m_attachmentsControlModeHasBeenSet; }

    /**
     * <p>Information about whether file upload during chat functionality is activated
     * for your application.</p>
     */
    inline void SetAttachmentsControlMode(const AttachmentsControlMode& value) { m_attachmentsControlModeHasBeenSet = true; m_attachmentsControlMode = value; }

    /**
     * <p>Information about whether file upload during chat functionality is activated
     * for your application.</p>
     */
    inline void SetAttachmentsControlMode(AttachmentsControlMode&& value) { m_attachmentsControlModeHasBeenSet = true; m_attachmentsControlMode = std::move(value); }

    /**
     * <p>Information about whether file upload during chat functionality is activated
     * for your application.</p>
     */
    inline AppliedAttachmentsConfiguration& WithAttachmentsControlMode(const AttachmentsControlMode& value) { SetAttachmentsControlMode(value); return *this;}

    /**
     * <p>Information about whether file upload during chat functionality is activated
     * for your application.</p>
     */
    inline AppliedAttachmentsConfiguration& WithAttachmentsControlMode(AttachmentsControlMode&& value) { SetAttachmentsControlMode(std::move(value)); return *this;}

  private:

    AttachmentsControlMode m_attachmentsControlMode;
    bool m_attachmentsControlModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
