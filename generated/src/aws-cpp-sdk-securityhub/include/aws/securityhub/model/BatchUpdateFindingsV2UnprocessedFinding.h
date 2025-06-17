/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfFindingIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/BatchUpdateFindingsV2UnprocessedFindingErrorCode.h>
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
   * <p>The list of findings that were not updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindingsV2UnprocessedFinding">AWS
   * API Reference</a></p>
   */
  class BatchUpdateFindingsV2UnprocessedFinding
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateFindingsV2UnprocessedFinding() = default;
    AWS_SECURITYHUB_API BatchUpdateFindingsV2UnprocessedFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API BatchUpdateFindingsV2UnprocessedFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding identifier of an unprocessed finding.</p>
     */
    inline const OcsfFindingIdentifier& GetFindingIdentifier() const { return m_findingIdentifier; }
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }
    template<typename FindingIdentifierT = OcsfFindingIdentifier>
    void SetFindingIdentifier(FindingIdentifierT&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::forward<FindingIdentifierT>(value); }
    template<typename FindingIdentifierT = OcsfFindingIdentifier>
    BatchUpdateFindingsV2UnprocessedFinding& WithFindingIdentifier(FindingIdentifierT&& value) { SetFindingIdentifier(std::forward<FindingIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata.uid of an unprocessed finding.</p>
     */
    inline const Aws::String& GetMetadataUid() const { return m_metadataUid; }
    inline bool MetadataUidHasBeenSet() const { return m_metadataUidHasBeenSet; }
    template<typename MetadataUidT = Aws::String>
    void SetMetadataUid(MetadataUidT&& value) { m_metadataUidHasBeenSet = true; m_metadataUid = std::forward<MetadataUidT>(value); }
    template<typename MetadataUidT = Aws::String>
    BatchUpdateFindingsV2UnprocessedFinding& WithMetadataUid(MetadataUidT&& value) { SetMetadataUid(std::forward<MetadataUidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the specific type of error preventing successful processing of a
     * finding during a batch update operation.</p>
     */
    inline BatchUpdateFindingsV2UnprocessedFindingErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(BatchUpdateFindingsV2UnprocessedFindingErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline BatchUpdateFindingsV2UnprocessedFinding& WithErrorCode(BatchUpdateFindingsV2UnprocessedFindingErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of why a finding could not be processed during a batch
     * update operation.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BatchUpdateFindingsV2UnprocessedFinding& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    OcsfFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet = false;

    Aws::String m_metadataUid;
    bool m_metadataUidHasBeenSet = false;

    BatchUpdateFindingsV2UnprocessedFindingErrorCode m_errorCode{BatchUpdateFindingsV2UnprocessedFindingErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
