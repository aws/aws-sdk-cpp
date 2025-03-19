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
    AWS_SSM_API FailedCreateAssociation() = default;
    AWS_SSM_API FailedCreateAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API FailedCreateAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association.</p>
     */
    inline const CreateAssociationBatchRequestEntry& GetEntry() const { return m_entry; }
    inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }
    template<typename EntryT = CreateAssociationBatchRequestEntry>
    void SetEntry(EntryT&& value) { m_entryHasBeenSet = true; m_entry = std::forward<EntryT>(value); }
    template<typename EntryT = CreateAssociationBatchRequestEntry>
    FailedCreateAssociation& WithEntry(EntryT&& value) { SetEntry(std::forward<EntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the failure.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FailedCreateAssociation& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the failure.</p>
     */
    inline Fault GetFault() const { return m_fault; }
    inline bool FaultHasBeenSet() const { return m_faultHasBeenSet; }
    inline void SetFault(Fault value) { m_faultHasBeenSet = true; m_fault = value; }
    inline FailedCreateAssociation& WithFault(Fault value) { SetFault(value); return *this;}
    ///@}
  private:

    CreateAssociationBatchRequestEntry m_entry;
    bool m_entryHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Fault m_fault{Fault::NOT_SET};
    bool m_faultHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
