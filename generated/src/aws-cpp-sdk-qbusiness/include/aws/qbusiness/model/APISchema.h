/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/S3.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Contains details about the OpenAPI schema for a custom plugin. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/custom-plugin.html#plugins-api-schema">custom
   * plugin OpenAPI schemas</a>. You can either include the schema directly in the
   * payload field or you can upload it to an S3 bucket and specify the S3 bucket
   * location in the <code>s3</code> field. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/APISchema">AWS
   * API Reference</a></p>
   */
  class APISchema
  {
  public:
    AWS_QBUSINESS_API APISchema() = default;
    AWS_QBUSINESS_API APISchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API APISchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON or YAML-formatted payload defining the OpenAPI schema for a custom
     * plugin. </p>
     */
    inline const Aws::String& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::String>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::String>
    APISchema& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the S3 object containing the OpenAPI schema for a
     * custom plugin. The schema could be in either JSON or YAML format.</p>
     */
    inline const S3& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = S3>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = S3>
    APISchema& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    S3 m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
