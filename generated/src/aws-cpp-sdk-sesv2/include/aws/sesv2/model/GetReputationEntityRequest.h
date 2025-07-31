/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ReputationEntityType.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to retrieve information about a specific reputation
   * entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetReputationEntityRequest">AWS
   * API Reference</a></p>
   */
  class GetReputationEntityRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetReputationEntityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReputationEntity"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the reputation entity. For resource-type entities,
     * this is the Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetReputationEntityReference() const { return m_reputationEntityReference; }
    inline bool ReputationEntityReferenceHasBeenSet() const { return m_reputationEntityReferenceHasBeenSet; }
    template<typename ReputationEntityReferenceT = Aws::String>
    void SetReputationEntityReference(ReputationEntityReferenceT&& value) { m_reputationEntityReferenceHasBeenSet = true; m_reputationEntityReference = std::forward<ReputationEntityReferenceT>(value); }
    template<typename ReputationEntityReferenceT = Aws::String>
    GetReputationEntityRequest& WithReputationEntityReference(ReputationEntityReferenceT&& value) { SetReputationEntityReference(std::forward<ReputationEntityReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of reputation entity. Currently, only <code>RESOURCE</code> type
     * entities are supported.</p>
     */
    inline ReputationEntityType GetReputationEntityType() const { return m_reputationEntityType; }
    inline bool ReputationEntityTypeHasBeenSet() const { return m_reputationEntityTypeHasBeenSet; }
    inline void SetReputationEntityType(ReputationEntityType value) { m_reputationEntityTypeHasBeenSet = true; m_reputationEntityType = value; }
    inline GetReputationEntityRequest& WithReputationEntityType(ReputationEntityType value) { SetReputationEntityType(value); return *this;}
    ///@}
  private:

    Aws::String m_reputationEntityReference;
    bool m_reputationEntityReferenceHasBeenSet = false;

    ReputationEntityType m_reputationEntityType{ReputationEntityType::NOT_SET};
    bool m_reputationEntityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
