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
   * <p>The VPC endpoint object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/VpcEndpointSummary">AWS
   * API Reference</a></p>
   */
  class VpcEndpointSummary
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API VpcEndpointSummary();
    AWS_OPENSEARCHSERVERLESS_API VpcEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API VpcEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline VpcEndpointSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline VpcEndpointSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline VpcEndpointSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VpcEndpointSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VpcEndpointSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VpcEndpointSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the endpoint.</p>
     */
    inline const VpcEndpointStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const VpcEndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(VpcEndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VpcEndpointSummary& WithStatus(const VpcEndpointStatus& value) { SetStatus(value); return *this;}
    inline VpcEndpointSummary& WithStatus(VpcEndpointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
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
