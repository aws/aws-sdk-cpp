/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
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
namespace PartnerCentralSelling
{
namespace Model
{
  class CreateResourceSnapshotResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotResult();
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Specifies the Amazon Resource Name (ARN) that uniquely identifies the
     * snapshot created. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateResourceSnapshotResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateResourceSnapshotResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateResourceSnapshotResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the revision number of the created snapshot. This field provides
     * important information about the snapshot's place in the sequence of snapshots
     * for the given resource. </p>
     */
    inline int GetRevision() const{ return m_revision; }
    inline void SetRevision(int value) { m_revision = value; }
    inline CreateResourceSnapshotResult& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateResourceSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateResourceSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateResourceSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    int m_revision;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
