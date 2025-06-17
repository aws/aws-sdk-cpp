/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfFindingIdentifier.h>
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
   * <p>The list of findings that were updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindingsV2ProcessedFinding">AWS
   * API Reference</a></p>
   */
  class BatchUpdateFindingsV2ProcessedFinding
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateFindingsV2ProcessedFinding() = default;
    AWS_SECURITYHUB_API BatchUpdateFindingsV2ProcessedFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API BatchUpdateFindingsV2ProcessedFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding identifier of a processed finding.</p>
     */
    inline const OcsfFindingIdentifier& GetFindingIdentifier() const { return m_findingIdentifier; }
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }
    template<typename FindingIdentifierT = OcsfFindingIdentifier>
    void SetFindingIdentifier(FindingIdentifierT&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::forward<FindingIdentifierT>(value); }
    template<typename FindingIdentifierT = OcsfFindingIdentifier>
    BatchUpdateFindingsV2ProcessedFinding& WithFindingIdentifier(FindingIdentifierT&& value) { SetFindingIdentifier(std::forward<FindingIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata.uid of a processed finding.</p>
     */
    inline const Aws::String& GetMetadataUid() const { return m_metadataUid; }
    inline bool MetadataUidHasBeenSet() const { return m_metadataUidHasBeenSet; }
    template<typename MetadataUidT = Aws::String>
    void SetMetadataUid(MetadataUidT&& value) { m_metadataUidHasBeenSet = true; m_metadataUid = std::forward<MetadataUidT>(value); }
    template<typename MetadataUidT = Aws::String>
    BatchUpdateFindingsV2ProcessedFinding& WithMetadataUid(MetadataUidT&& value) { SetMetadataUid(std::forward<MetadataUidT>(value)); return *this;}
    ///@}
  private:

    OcsfFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet = false;

    Aws::String m_metadataUid;
    bool m_metadataUidHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
