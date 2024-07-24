/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
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
namespace MedicalImaging
{
namespace Model
{

  /**
   * <p>Contains copiable <code>Attributes</code> structure and wraps information
   * related to specific copy use cases. For example, when copying
   * subsets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/MetadataCopies">AWS
   * API Reference</a></p>
   */
  class MetadataCopies
  {
  public:
    AWS_MEDICALIMAGING_API MetadataCopies();
    AWS_MEDICALIMAGING_API MetadataCopies(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API MetadataCopies& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON string used to specify a subset of SOP Instances to copy from source
     * to destination image set.</p>
     */
    inline const Aws::String& GetCopiableAttributes() const{ return m_copiableAttributes; }
    inline bool CopiableAttributesHasBeenSet() const { return m_copiableAttributesHasBeenSet; }
    inline void SetCopiableAttributes(const Aws::String& value) { m_copiableAttributesHasBeenSet = true; m_copiableAttributes = value; }
    inline void SetCopiableAttributes(Aws::String&& value) { m_copiableAttributesHasBeenSet = true; m_copiableAttributes = std::move(value); }
    inline void SetCopiableAttributes(const char* value) { m_copiableAttributesHasBeenSet = true; m_copiableAttributes.assign(value); }
    inline MetadataCopies& WithCopiableAttributes(const Aws::String& value) { SetCopiableAttributes(value); return *this;}
    inline MetadataCopies& WithCopiableAttributes(Aws::String&& value) { SetCopiableAttributes(std::move(value)); return *this;}
    inline MetadataCopies& WithCopiableAttributes(const char* value) { SetCopiableAttributes(value); return *this;}
    ///@}
  private:

    Aws::String m_copiableAttributes;
    bool m_copiableAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
