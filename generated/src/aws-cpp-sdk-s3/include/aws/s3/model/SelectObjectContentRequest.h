/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/model/SelectObjectContentHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ExpressionType.h>
#include <aws/s3/model/RequestProgress.h>
#include <aws/s3/model/InputSerialization.h>
#include <aws/s3/model/OutputSerialization.h>
#include <aws/s3/model/ScanRange.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3
{
namespace Model
{

  /**
   *  <p>Learn Amazon S3 Select is no longer available to new customers.
   * Existing customers of Amazon S3 Select can continue to use the feature as usual.
   * <a
   * href="http://aws.amazon.com/blogs/storage/how-to-optimize-querying-your-data-in-amazon-s3/">Learn
   * more</a> </p>  <p>Request to filter the contents of an Amazon S3 object
   * based on a simple Structured Query Language (SQL) statement. In the request,
   * along with the SQL expression, you must specify a data serialization format
   * (JSON or CSV) of the object. Amazon S3 uses this to parse object data into
   * records. It returns only records that match the specified SQL expression. You
   * must also specify the data serialization format for the response. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/RESTObjectSELECTContent.html">S3Select
   * API Documentation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/SelectObjectContentRequest">AWS
   * API Reference</a></p>
   */
  class SelectObjectContentRequest : public S3Request
  {
  public:
    AWS_S3_API SelectObjectContentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SelectObjectContent"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_S3_API Aws::String SerializePayload() const override;

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3_API bool HasEmbeddedError(IOStream &body, const Http::HeaderValueCollection &header) const override;
    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline SelectObjectContentHandler& GetEventStreamHandler() { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const SelectObjectContentHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline SelectObjectContentRequest& WithEventStreamHandler(const SelectObjectContentHandler& value) { SetEventStreamHandler(value); return *this; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    SelectObjectContentRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    SelectObjectContentRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption (SSE) algorithm used to encrypt the object. This
     * parameter is needed only when the object was created using a checksum algorithm.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Protecting
     * data using SSE-C keys</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetSSECustomerAlgorithm() const { return m_sSECustomerAlgorithm; }
    inline bool SSECustomerAlgorithmHasBeenSet() const { return m_sSECustomerAlgorithmHasBeenSet; }
    template<typename SSECustomerAlgorithmT = Aws::String>
    void SetSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { m_sSECustomerAlgorithmHasBeenSet = true; m_sSECustomerAlgorithm = std::forward<SSECustomerAlgorithmT>(value); }
    template<typename SSECustomerAlgorithmT = Aws::String>
    SelectObjectContentRequest& WithSSECustomerAlgorithm(SSECustomerAlgorithmT&& value) { SetSSECustomerAlgorithm(std::forward<SSECustomerAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption (SSE) customer managed key. This parameter is
     * needed only when the object was created using a checksum algorithm. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Protecting
     * data using SSE-C keys</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetSSECustomerKey() const { return m_sSECustomerKey; }
    inline bool SSECustomerKeyHasBeenSet() const { return m_sSECustomerKeyHasBeenSet; }
    template<typename SSECustomerKeyT = Aws::String>
    void SetSSECustomerKey(SSECustomerKeyT&& value) { m_sSECustomerKeyHasBeenSet = true; m_sSECustomerKey = std::forward<SSECustomerKeyT>(value); }
    template<typename SSECustomerKeyT = Aws::String>
    SelectObjectContentRequest& WithSSECustomerKey(SSECustomerKeyT&& value) { SetSSECustomerKey(std::forward<SSECustomerKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MD5 server-side encryption (SSE) customer managed key. This parameter is
     * needed only when the object was created using a checksum algorithm. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/ServerSideEncryptionCustomerKeys.html">Protecting
     * data using SSE-C keys</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetSSECustomerKeyMD5() const { return m_sSECustomerKeyMD5; }
    inline bool SSECustomerKeyMD5HasBeenSet() const { return m_sSECustomerKeyMD5HasBeenSet; }
    template<typename SSECustomerKeyMD5T = Aws::String>
    void SetSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { m_sSECustomerKeyMD5HasBeenSet = true; m_sSECustomerKeyMD5 = std::forward<SSECustomerKeyMD5T>(value); }
    template<typename SSECustomerKeyMD5T = Aws::String>
    SelectObjectContentRequest& WithSSECustomerKeyMD5(SSECustomerKeyMD5T&& value) { SetSSECustomerKeyMD5(std::forward<SSECustomerKeyMD5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expression that is used to query the object.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    SelectObjectContentRequest& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the provided expression (for example, SQL).</p>
     */
    inline ExpressionType GetExpressionType() const { return m_expressionType; }
    inline bool ExpressionTypeHasBeenSet() const { return m_expressionTypeHasBeenSet; }
    inline void SetExpressionType(ExpressionType value) { m_expressionTypeHasBeenSet = true; m_expressionType = value; }
    inline SelectObjectContentRequest& WithExpressionType(ExpressionType value) { SetExpressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if periodic request progress information should be enabled.</p>
     */
    inline const RequestProgress& GetRequestProgress() const { return m_requestProgress; }
    inline bool RequestProgressHasBeenSet() const { return m_requestProgressHasBeenSet; }
    template<typename RequestProgressT = RequestProgress>
    void SetRequestProgress(RequestProgressT&& value) { m_requestProgressHasBeenSet = true; m_requestProgress = std::forward<RequestProgressT>(value); }
    template<typename RequestProgressT = RequestProgress>
    SelectObjectContentRequest& WithRequestProgress(RequestProgressT&& value) { SetRequestProgress(std::forward<RequestProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the format of the data in the object that is being queried.</p>
     */
    inline const InputSerialization& GetInputSerialization() const { return m_inputSerialization; }
    inline bool InputSerializationHasBeenSet() const { return m_inputSerializationHasBeenSet; }
    template<typename InputSerializationT = InputSerialization>
    void SetInputSerialization(InputSerializationT&& value) { m_inputSerializationHasBeenSet = true; m_inputSerialization = std::forward<InputSerializationT>(value); }
    template<typename InputSerializationT = InputSerialization>
    SelectObjectContentRequest& WithInputSerialization(InputSerializationT&& value) { SetInputSerialization(std::forward<InputSerializationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the format of the data that you want Amazon S3 to return in
     * response.</p>
     */
    inline const OutputSerialization& GetOutputSerialization() const { return m_outputSerialization; }
    inline bool OutputSerializationHasBeenSet() const { return m_outputSerializationHasBeenSet; }
    template<typename OutputSerializationT = OutputSerialization>
    void SetOutputSerialization(OutputSerializationT&& value) { m_outputSerializationHasBeenSet = true; m_outputSerialization = std::forward<OutputSerializationT>(value); }
    template<typename OutputSerializationT = OutputSerialization>
    SelectObjectContentRequest& WithOutputSerialization(OutputSerializationT&& value) { SetOutputSerialization(std::forward<OutputSerializationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the byte range of the object to get the records from. A record is
     * processed when its first byte is contained by the range. This parameter is
     * optional, but when specified, it must not be empty. See RFC 2616, Section
     * 14.35.1 about how to specify the start and end of the range.</p> <p>
     * <code>ScanRange</code>may be used in the following ways:</p> <ul> <li> <p>
     * <code>&lt;scanrange&gt;&lt;start&gt;50&lt;/start&gt;&lt;end&gt;100&lt;/end&gt;&lt;/scanrange&gt;</code>
     * - process only the records starting between the bytes 50 and 100 (inclusive,
     * counting from zero)</p> </li> <li> <p>
     * <code>&lt;scanrange&gt;&lt;start&gt;50&lt;/start&gt;&lt;/scanrange&gt;</code> -
     * process only the records starting after the byte 50</p> </li> <li> <p>
     * <code>&lt;scanrange&gt;&lt;end&gt;50&lt;/end&gt;&lt;/scanrange&gt;</code> -
     * process only the records within the last 50 bytes of the file.</p> </li> </ul>
     */
    inline const ScanRange& GetScanRange() const { return m_scanRange; }
    inline bool ScanRangeHasBeenSet() const { return m_scanRangeHasBeenSet; }
    template<typename ScanRangeT = ScanRange>
    void SetScanRange(ScanRangeT&& value) { m_scanRangeHasBeenSet = true; m_scanRange = std::forward<ScanRangeT>(value); }
    template<typename ScanRangeT = ScanRange>
    SelectObjectContentRequest& WithScanRange(ScanRangeT&& value) { SetScanRange(std::forward<ScanRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the expected bucket owner. If the account ID that you
     * provide does not match the actual owner of the bucket, the request fails with
     * the HTTP status code <code>403 Forbidden</code> (access denied).</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    SelectObjectContentRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    SelectObjectContentRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    SelectObjectContentRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_sSECustomerAlgorithm;
    bool m_sSECustomerAlgorithmHasBeenSet = false;

    Aws::String m_sSECustomerKey;
    bool m_sSECustomerKeyHasBeenSet = false;

    Aws::String m_sSECustomerKeyMD5;
    bool m_sSECustomerKeyMD5HasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    ExpressionType m_expressionType{ExpressionType::NOT_SET};
    bool m_expressionTypeHasBeenSet = false;

    RequestProgress m_requestProgress;
    bool m_requestProgressHasBeenSet = false;

    InputSerialization m_inputSerialization;
    bool m_inputSerializationHasBeenSet = false;

    OutputSerialization m_outputSerialization;
    bool m_outputSerializationHasBeenSet = false;

    ScanRange m_scanRange;
    bool m_scanRangeHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
    SelectObjectContentHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  };

} // namespace Model
} // namespace S3
} // namespace Aws
