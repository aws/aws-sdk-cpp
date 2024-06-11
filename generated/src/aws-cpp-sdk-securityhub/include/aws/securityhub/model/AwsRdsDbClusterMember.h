/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an instance in the DB cluster.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbClusterMember">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbClusterMember
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbClusterMember();
    AWS_SECURITYHUB_API AwsRdsDbClusterMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbClusterMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the cluster member is the primary instance for the DB cluster.</p>
     */
    inline bool GetIsClusterWriter() const{ return m_isClusterWriter; }
    inline bool IsClusterWriterHasBeenSet() const { return m_isClusterWriterHasBeenSet; }
    inline void SetIsClusterWriter(bool value) { m_isClusterWriterHasBeenSet = true; m_isClusterWriter = value; }
    inline AwsRdsDbClusterMember& WithIsClusterWriter(bool value) { SetIsClusterWriter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the order in which an Aurora replica is promoted to the primary
     * instance when the existing primary instance fails.</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline AwsRdsDbClusterMember& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance identifier for this member of the DB cluster.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const{ return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    inline void SetDbInstanceIdentifier(const Aws::String& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = value; }
    inline void SetDbInstanceIdentifier(Aws::String&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::move(value); }
    inline void SetDbInstanceIdentifier(const char* value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier.assign(value); }
    inline AwsRdsDbClusterMember& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}
    inline AwsRdsDbClusterMember& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}
    inline AwsRdsDbClusterMember& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB cluster parameter group for this member of the DB
     * cluster.</p>
     */
    inline const Aws::String& GetDbClusterParameterGroupStatus() const{ return m_dbClusterParameterGroupStatus; }
    inline bool DbClusterParameterGroupStatusHasBeenSet() const { return m_dbClusterParameterGroupStatusHasBeenSet; }
    inline void SetDbClusterParameterGroupStatus(const Aws::String& value) { m_dbClusterParameterGroupStatusHasBeenSet = true; m_dbClusterParameterGroupStatus = value; }
    inline void SetDbClusterParameterGroupStatus(Aws::String&& value) { m_dbClusterParameterGroupStatusHasBeenSet = true; m_dbClusterParameterGroupStatus = std::move(value); }
    inline void SetDbClusterParameterGroupStatus(const char* value) { m_dbClusterParameterGroupStatusHasBeenSet = true; m_dbClusterParameterGroupStatus.assign(value); }
    inline AwsRdsDbClusterMember& WithDbClusterParameterGroupStatus(const Aws::String& value) { SetDbClusterParameterGroupStatus(value); return *this;}
    inline AwsRdsDbClusterMember& WithDbClusterParameterGroupStatus(Aws::String&& value) { SetDbClusterParameterGroupStatus(std::move(value)); return *this;}
    inline AwsRdsDbClusterMember& WithDbClusterParameterGroupStatus(const char* value) { SetDbClusterParameterGroupStatus(value); return *this;}
    ///@}
  private:

    bool m_isClusterWriter;
    bool m_isClusterWriterHasBeenSet = false;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet = false;

    Aws::String m_dbClusterParameterGroupStatus;
    bool m_dbClusterParameterGroupStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
