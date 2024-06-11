/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PcaConnectorScep
{
namespace Model
{

  /**
   * <p>Contains details about the connector's challenge.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/ChallengeMetadata">AWS
   * API Reference</a></p>
   */
  class ChallengeMetadata
  {
  public:
    AWS_PCACONNECTORSCEP_API ChallengeMetadata();
    AWS_PCACONNECTORSCEP_API ChallengeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API ChallengeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORSCEP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the challenge.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ChallengeMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ChallengeMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ChallengeMetadata& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }
    inline ChallengeMetadata& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}
    inline ChallengeMetadata& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}
    inline ChallengeMetadata& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the connector was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ChallengeMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ChallengeMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the connector was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ChallengeMetadata& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ChallengeMetadata& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
