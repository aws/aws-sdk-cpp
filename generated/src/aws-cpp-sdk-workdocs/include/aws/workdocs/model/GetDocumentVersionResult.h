/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DocumentVersionMetadata.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{
  class GetDocumentVersionResult
  {
  public:
    AWS_WORKDOCS_API GetDocumentVersionResult() = default;
    AWS_WORKDOCS_API GetDocumentVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API GetDocumentVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version metadata.</p>
     */
    inline const DocumentVersionMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = DocumentVersionMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = DocumentVersionMetadata>
    GetDocumentVersionResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom metadata on the document version.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomMetadata() const { return m_customMetadata; }
    template<typename CustomMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomMetadata(CustomMetadataT&& value) { m_customMetadataHasBeenSet = true; m_customMetadata = std::forward<CustomMetadataT>(value); }
    template<typename CustomMetadataT = Aws::Map<Aws::String, Aws::String>>
    GetDocumentVersionResult& WithCustomMetadata(CustomMetadataT&& value) { SetCustomMetadata(std::forward<CustomMetadataT>(value)); return *this;}
    template<typename CustomMetadataKeyT = Aws::String, typename CustomMetadataValueT = Aws::String>
    GetDocumentVersionResult& AddCustomMetadata(CustomMetadataKeyT&& key, CustomMetadataValueT&& value) {
      m_customMetadataHasBeenSet = true; m_customMetadata.emplace(std::forward<CustomMetadataKeyT>(key), std::forward<CustomMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDocumentVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentVersionMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customMetadata;
    bool m_customMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
