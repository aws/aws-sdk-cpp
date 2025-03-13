/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/BucketLocationConstraint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class GetBucketLocationResult
  {
  public:
    AWS_S3_API GetBucketLocationResult() = default;
    AWS_S3_API GetBucketLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetBucketLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Specifies the Region where the bucket resides. For a list of all the Amazon
     * S3 supported location constraints by Region, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
     * and Endpoints</a>.</p> <p>Buckets in Region <code>us-east-1</code> have a
     * LocationConstraint of <code>null</code>. Buckets with a LocationConstraint of
     * <code>EU</code> reside in <code>eu-west-1</code>.</p>
     */
    inline BucketLocationConstraint GetLocationConstraint() const { return m_locationConstraint; }
    inline void SetLocationConstraint(BucketLocationConstraint value) { m_locationConstraintHasBeenSet = true; m_locationConstraint = value; }
    inline GetBucketLocationResult& WithLocationConstraint(BucketLocationConstraint value) { SetLocationConstraint(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketLocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BucketLocationConstraint m_locationConstraint{BucketLocationConstraint::NOT_SET};
    bool m_locationConstraintHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
