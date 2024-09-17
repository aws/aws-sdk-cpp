/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AmazonConnectGuideAssociationData.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The contents of a content association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ContentAssociationContents">AWS
   * API Reference</a></p>
   */
  class ContentAssociationContents
  {
  public:
    AWS_QCONNECT_API ContentAssociationContents();
    AWS_QCONNECT_API ContentAssociationContents(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ContentAssociationContents& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data of the step-by-step guide association.</p>
     */
    inline const AmazonConnectGuideAssociationData& GetAmazonConnectGuideAssociation() const{ return m_amazonConnectGuideAssociation; }
    inline bool AmazonConnectGuideAssociationHasBeenSet() const { return m_amazonConnectGuideAssociationHasBeenSet; }
    inline void SetAmazonConnectGuideAssociation(const AmazonConnectGuideAssociationData& value) { m_amazonConnectGuideAssociationHasBeenSet = true; m_amazonConnectGuideAssociation = value; }
    inline void SetAmazonConnectGuideAssociation(AmazonConnectGuideAssociationData&& value) { m_amazonConnectGuideAssociationHasBeenSet = true; m_amazonConnectGuideAssociation = std::move(value); }
    inline ContentAssociationContents& WithAmazonConnectGuideAssociation(const AmazonConnectGuideAssociationData& value) { SetAmazonConnectGuideAssociation(value); return *this;}
    inline ContentAssociationContents& WithAmazonConnectGuideAssociation(AmazonConnectGuideAssociationData&& value) { SetAmazonConnectGuideAssociation(std::move(value)); return *this;}
    ///@}
  private:

    AmazonConnectGuideAssociationData m_amazonConnectGuideAssociation;
    bool m_amazonConnectGuideAssociationHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
