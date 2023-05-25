/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sns/model/ResponseMetadata.h>
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
namespace SNS
{
namespace Model
{
  /**
   * <p>Response from CreateTopic action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopicResponse">AWS
   * API Reference</a></p>
   */
  class CreateTopicResult
  {
  public:
    AWS_SNS_API CreateTopicResult();
    AWS_SNS_API CreateTopicResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API CreateTopicResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) assigned to the created topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the created topic.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the created topic.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the created topic.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the created topic.</p>
     */
    inline CreateTopicResult& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the created topic.</p>
     */
    inline CreateTopicResult& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) assigned to the created topic.</p>
     */
    inline CreateTopicResult& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTopicResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTopicResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_topicArn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
