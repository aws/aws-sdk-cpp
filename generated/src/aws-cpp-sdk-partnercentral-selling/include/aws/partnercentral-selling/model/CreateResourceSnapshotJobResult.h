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
  class CreateResourceSnapshotJobResult
  {
  public:
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotJobResult();
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PARTNERCENTRALSELLING_API CreateResourceSnapshotJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created snapshot job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateResourceSnapshotJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateResourceSnapshotJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the created snapshot job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateResourceSnapshotJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateResourceSnapshotJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateResourceSnapshotJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateResourceSnapshotJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateResourceSnapshotJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
