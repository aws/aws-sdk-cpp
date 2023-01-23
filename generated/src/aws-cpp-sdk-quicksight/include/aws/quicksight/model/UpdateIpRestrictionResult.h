/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class UpdateIpRestrictionResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateIpRestrictionResult();
    AWS_QUICKSIGHT_API UpdateIpRestrictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateIpRestrictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the IP rules.</p>
     */
    inline UpdateIpRestrictionResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline UpdateIpRestrictionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline UpdateIpRestrictionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline UpdateIpRestrictionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request. </p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request. </p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request. </p>
     */
    inline UpdateIpRestrictionResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_awsAccountId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
