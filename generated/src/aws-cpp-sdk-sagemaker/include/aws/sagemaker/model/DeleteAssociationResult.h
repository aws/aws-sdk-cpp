/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class DeleteAssociationResult
  {
  public:
    AWS_SAGEMAKER_API DeleteAssociationResult();
    AWS_SAGEMAKER_API DeleteAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DeleteAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArn.assign(value); }
    inline DeleteAssociationResult& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline DeleteAssociationResult& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline DeleteAssociationResult& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArn.assign(value); }
    inline DeleteAssociationResult& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline DeleteAssociationResult& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline DeleteAssociationResult& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceArn;

    Aws::String m_destinationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
