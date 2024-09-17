/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CreateAssociationBatchRequestEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Fault.h>
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
   * <p>Describes a failed association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/FailedCreateAssociation">AWS
   * API Reference</a></p>
   */
  class FailedCreateAssociation
  {
  public:
    AWS_SSM_API FailedCreateAssociation();
    AWS_SSM_API FailedCreateAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API FailedCreateAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association.</p>
     */
    inline const CreateAssociationBatchRequestEntry& GetEntry() const{ return m_entry; }
    inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }
    inline void SetEntry(const CreateAssociationBatchRequestEntry& value) { m_entryHasBeenSet = true; m_entry = value; }
    inline void SetEntry(CreateAssociationBatchRequestEntry&& value) { m_entryHasBeenSet = true; m_entry = std::move(value); }
    inline FailedCreateAssociation& WithEntry(const CreateAssociationBatchRequestEntry& value) { SetEntry(value); return *this;}
    inline FailedCreateAssociation& WithEntry(CreateAssociationBatchRequestEntry&& value) { SetEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline FailedCreateAssociation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline FailedCreateAssociation& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline FailedCreateAssociation& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the failure.</p>
     */
    inline const Fault& GetFault() const{ return m_fault; }
    inline bool FaultHasBeenSet() const { return m_faultHasBeenSet; }
    inline void SetFault(const Fault& value) { m_faultHasBeenSet = true; m_fault = value; }
    inline void SetFault(Fault&& value) { m_faultHasBeenSet = true; m_fault = std::move(value); }
    inline FailedCreateAssociation& WithFault(const Fault& value) { SetFault(value); return *this;}
    inline FailedCreateAssociation& WithFault(Fault&& value) { SetFault(std::move(value)); return *this;}
    ///@}
  private:

    CreateAssociationBatchRequestEntry m_entry;
    bool m_entryHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Fault m_fault;
    bool m_faultHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
