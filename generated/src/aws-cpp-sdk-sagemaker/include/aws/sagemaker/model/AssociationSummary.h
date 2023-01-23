/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssociationEdgeType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Lists a summary of the properties of an association. An association is an
   * entity that links other lineage or experiment entities. An example would be an
   * association between a training job and a model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AssociationSummary">AWS
   * API Reference</a></p>
   */
  class AssociationSummary
  {
  public:
    AWS_SAGEMAKER_API AssociationSummary();
    AWS_SAGEMAKER_API AssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of the source.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The ARN of the source.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The ARN of the source.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of the source.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The ARN of the source.</p>
     */
    inline AssociationSummary& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the source.</p>
     */
    inline AssociationSummary& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the source.</p>
     */
    inline AssociationSummary& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline AssociationSummary& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline AssociationSummary& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline AssociationSummary& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The source type.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type.</p>
     */
    inline AssociationSummary& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type.</p>
     */
    inline AssociationSummary& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type.</p>
     */
    inline AssociationSummary& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The destination type.</p>
     */
    inline const Aws::String& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>The destination type.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>The destination type.</p>
     */
    inline void SetDestinationType(const Aws::String& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>The destination type.</p>
     */
    inline void SetDestinationType(Aws::String&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>The destination type.</p>
     */
    inline void SetDestinationType(const char* value) { m_destinationTypeHasBeenSet = true; m_destinationType.assign(value); }

    /**
     * <p>The destination type.</p>
     */
    inline AssociationSummary& WithDestinationType(const Aws::String& value) { SetDestinationType(value); return *this;}

    /**
     * <p>The destination type.</p>
     */
    inline AssociationSummary& WithDestinationType(Aws::String&& value) { SetDestinationType(std::move(value)); return *this;}

    /**
     * <p>The destination type.</p>
     */
    inline AssociationSummary& WithDestinationType(const char* value) { SetDestinationType(value); return *this;}


    /**
     * <p>The type of the association.</p>
     */
    inline const AssociationEdgeType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p>The type of the association.</p>
     */
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }

    /**
     * <p>The type of the association.</p>
     */
    inline void SetAssociationType(const AssociationEdgeType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }

    /**
     * <p>The type of the association.</p>
     */
    inline void SetAssociationType(AssociationEdgeType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }

    /**
     * <p>The type of the association.</p>
     */
    inline AssociationSummary& WithAssociationType(const AssociationEdgeType& value) { SetAssociationType(value); return *this;}

    /**
     * <p>The type of the association.</p>
     */
    inline AssociationSummary& WithAssociationType(AssociationEdgeType&& value) { SetAssociationType(std::move(value)); return *this;}


    /**
     * <p>The name of the source.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>The name of the source.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>The name of the source.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>The name of the source.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>The name of the source.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>The name of the source.</p>
     */
    inline AssociationSummary& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>The name of the source.</p>
     */
    inline AssociationSummary& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the source.</p>
     */
    inline AssociationSummary& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    /**
     * <p>The name of the destination.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the destination.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>The name of the destination.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>The name of the destination.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>The name of the destination.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>The name of the destination.</p>
     */
    inline AssociationSummary& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the destination.</p>
     */
    inline AssociationSummary& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination.</p>
     */
    inline AssociationSummary& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>When the association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the association was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the association was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the association was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the association was created.</p>
     */
    inline AssociationSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the association was created.</p>
     */
    inline AssociationSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    
    inline AssociationSummary& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline AssociationSummary& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    AssociationEdgeType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
