/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/VpcEndpointStatus.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Creation details for an OpenSearch Serverless-managed interface endpoint. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-vpc.html">Access
   * Amazon OpenSearch Serverless using an interface endpoint</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CreateVpcEndpointDetail">AWS
   * API Reference</a></p>
   */
  class CreateVpcEndpointDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointDetail();
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API CreateVpcEndpointDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline CreateVpcEndpointDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline CreateVpcEndpointDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline CreateVpcEndpointDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the endpoint.</p>
     */
    inline CreateVpcEndpointDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline CreateVpcEndpointDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.</p>
     */
    inline CreateVpcEndpointDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status in the endpoint creation process.</p>
     */
    inline const VpcEndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status in the endpoint creation process.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status in the endpoint creation process.</p>
     */
    inline void SetStatus(const VpcEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status in the endpoint creation process.</p>
     */
    inline void SetStatus(VpcEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status in the endpoint creation process.</p>
     */
    inline CreateVpcEndpointDetail& WithStatus(const VpcEndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status in the endpoint creation process.</p>
     */
    inline CreateVpcEndpointDetail& WithStatus(VpcEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VpcEndpointStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
