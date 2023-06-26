/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The mapping between a Amazon Web Services Region and the key that's used to
   * encrypt the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/RegionMapInputValue">AWS
   * API Reference</a></p>
   */
  class RegionMapInputValue
  {
  public:
    AWS_SSMINCIDENTS_API RegionMapInputValue();
    AWS_SSMINCIDENTS_API RegionMapInputValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API RegionMapInputValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline const Aws::String& GetSseKmsKeyId() const{ return m_sseKmsKeyId; }

    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline bool SseKmsKeyIdHasBeenSet() const { return m_sseKmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline void SetSseKmsKeyId(const Aws::String& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = value; }

    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline void SetSseKmsKeyId(Aws::String&& value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId = std::move(value); }

    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline void SetSseKmsKeyId(const char* value) { m_sseKmsKeyIdHasBeenSet = true; m_sseKmsKeyId.assign(value); }

    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline RegionMapInputValue& WithSseKmsKeyId(const Aws::String& value) { SetSseKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline RegionMapInputValue& WithSseKmsKeyId(Aws::String&& value) { SetSseKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key used to encrypt the data in your replication set.</p>
     */
    inline RegionMapInputValue& WithSseKmsKeyId(const char* value) { SetSseKmsKeyId(value); return *this;}

  private:

    Aws::String m_sseKmsKeyId;
    bool m_sseKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
