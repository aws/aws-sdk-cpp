/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage/model/IngestEndpoint.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * An HTTP Live Streaming (HLS) ingest resource configuration.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HlsIngest">AWS
   * API Reference</a></p>
   */
  class HlsIngest
  {
  public:
    AWS_MEDIAPACKAGE_API HlsIngest() = default;
    AWS_MEDIAPACKAGE_API HlsIngest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HlsIngest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of endpoints to which the source stream should be sent.
     */
    inline const Aws::Vector<IngestEndpoint>& GetIngestEndpoints() const { return m_ingestEndpoints; }
    inline bool IngestEndpointsHasBeenSet() const { return m_ingestEndpointsHasBeenSet; }
    template<typename IngestEndpointsT = Aws::Vector<IngestEndpoint>>
    void SetIngestEndpoints(IngestEndpointsT&& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints = std::forward<IngestEndpointsT>(value); }
    template<typename IngestEndpointsT = Aws::Vector<IngestEndpoint>>
    HlsIngest& WithIngestEndpoints(IngestEndpointsT&& value) { SetIngestEndpoints(std::forward<IngestEndpointsT>(value)); return *this;}
    template<typename IngestEndpointsT = IngestEndpoint>
    HlsIngest& AddIngestEndpoints(IngestEndpointsT&& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints.emplace_back(std::forward<IngestEndpointsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<IngestEndpoint> m_ingestEndpoints;
    bool m_ingestEndpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
