/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sts/STS_EXPORTS.h>
#include <aws/sts/model/Credentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/model/ResponseMetadata.h>
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
namespace STS
{
namespace Model
{
  class AssumeRootResult
  {
  public:
    AWS_STS_API AssumeRootResult();
    AWS_STS_API AssumeRootResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_STS_API AssumeRootResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The temporary security credentials, which include an access key ID, a secret
     * access key, and a security token.</p>  <p>The size of the security token
     * that STS API operations return is not fixed. We strongly recommend that you make
     * no assumptions about the maximum size.</p> 
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }
    inline AssumeRootResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}
    inline AssumeRootResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source identity specified by the principal that is calling the
     * <code>AssumeRoot</code> operation.</p> <p>You can use the
     * <code>aws:SourceIdentity</code> condition key to control access based on the
     * value of source identity. For more information about using source identity, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_control-access_monitor.html">Monitor
     * and control actions taken with assumed roles</a> in the <i>IAM User
     * Guide</i>.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of upper- and lower-case alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@-</p>
     */
    inline const Aws::String& GetSourceIdentity() const{ return m_sourceIdentity; }
    inline void SetSourceIdentity(const Aws::String& value) { m_sourceIdentity = value; }
    inline void SetSourceIdentity(Aws::String&& value) { m_sourceIdentity = std::move(value); }
    inline void SetSourceIdentity(const char* value) { m_sourceIdentity.assign(value); }
    inline AssumeRootResult& WithSourceIdentity(const Aws::String& value) { SetSourceIdentity(value); return *this;}
    inline AssumeRootResult& WithSourceIdentity(Aws::String&& value) { SetSourceIdentity(std::move(value)); return *this;}
    inline AssumeRootResult& WithSourceIdentity(const char* value) { SetSourceIdentity(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline AssumeRootResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline AssumeRootResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Credentials m_credentials;

    Aws::String m_sourceIdentity;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace STS
} // namespace Aws
