/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/Volume.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeVolumes</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeVolumesResult">AWS
   * API Reference</a></p>
   */
  class DescribeVolumesResult
  {
  public:
    AWS_OPSWORKS_API DescribeVolumesResult() = default;
    AWS_OPSWORKS_API DescribeVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of volume IDs.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const { return m_volumes; }
    template<typename VolumesT = Aws::Vector<Volume>>
    void SetVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes = std::forward<VolumesT>(value); }
    template<typename VolumesT = Aws::Vector<Volume>>
    DescribeVolumesResult& WithVolumes(VolumesT&& value) { SetVolumes(std::forward<VolumesT>(value)); return *this;}
    template<typename VolumesT = Volume>
    DescribeVolumesResult& AddVolumes(VolumesT&& value) { m_volumesHasBeenSet = true; m_volumes.emplace_back(std::forward<VolumesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVolumesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
