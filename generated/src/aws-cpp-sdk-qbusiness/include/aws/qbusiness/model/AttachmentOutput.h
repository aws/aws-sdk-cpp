﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/AttachmentStatus.h>
#include <aws/qbusiness/model/ErrorDetail.h>
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
   * <p>The details of a file uploaded during chat.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AttachmentOutput">AWS
   * API Reference</a></p>
   */
  class AttachmentOutput
  {
  public:
    AWS_QBUSINESS_API AttachmentOutput();
    AWS_QBUSINESS_API AttachmentOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AttachmentOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a file uploaded during chat.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttachmentOutput& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttachmentOutput& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttachmentOutput& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a file uploaded during chat.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AttachmentOutput& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}
    inline AttachmentOutput& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error associated with a file uploaded during chat.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline AttachmentOutput& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline AttachmentOutput& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
