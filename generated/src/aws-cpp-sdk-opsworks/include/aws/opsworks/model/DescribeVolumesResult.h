/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_OPSWORKS_API DescribeVolumesResult();
    AWS_OPSWORKS_API DescribeVolumesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeVolumesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of volume IDs.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>An array of volume IDs.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumes = value; }

    /**
     * <p>An array of volume IDs.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumes = std::move(value); }

    /**
     * <p>An array of volume IDs.</p>
     */
    inline DescribeVolumesResult& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>An array of volume IDs.</p>
     */
    inline DescribeVolumesResult& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>An array of volume IDs.</p>
     */
    inline DescribeVolumesResult& AddVolumes(const Volume& value) { m_volumes.push_back(value); return *this; }

    /**
     * <p>An array of volume IDs.</p>
     */
    inline DescribeVolumesResult& AddVolumes(Volume&& value) { m_volumes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Volume> m_volumes;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
