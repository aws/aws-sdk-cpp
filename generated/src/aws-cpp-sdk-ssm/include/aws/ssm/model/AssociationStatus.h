/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AssociationStatusName.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes an association status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationStatus">AWS
   * API Reference</a></p>
   */
  class AssociationStatus
  {
  public:
    AWS_SSM_API AssociationStatus();
    AWS_SSM_API AssociationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date when the status changed.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline AssociationStatus& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}
    inline AssociationStatus& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const AssociationStatusName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const AssociationStatusName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(AssociationStatusName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline AssociationStatus& WithName(const AssociationStatusName& value) { SetName(value); return *this;}
    inline AssociationStatus& WithName(AssociationStatusName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline AssociationStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline AssociationStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline AssociationStatus& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined string.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }
    inline AssociationStatus& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}
    inline AssociationStatus& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    inline AssociationStatus& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    AssociationStatusName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
