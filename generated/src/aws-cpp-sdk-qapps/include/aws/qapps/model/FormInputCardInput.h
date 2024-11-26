/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/CardType.h>
#include <aws/qapps/model/FormInputCardMetadata.h>
#include <aws/qapps/model/InputCardComputeMode.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>Represents a form input card for an Amazon Q App.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/FormInputCardInput">AWS
   * API Reference</a></p>
   */
  class FormInputCardInput
  {
  public:
    AWS_QAPPS_API FormInputCardInput();
    AWS_QAPPS_API FormInputCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API FormInputCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the form input card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline FormInputCardInput& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline FormInputCardInput& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline FormInputCardInput& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the form input card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FormInputCardInput& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FormInputCardInput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FormInputCardInput& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline FormInputCardInput& WithType(const CardType& value) { SetType(value); return *this;}
    inline FormInputCardInput& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that defines the form input card data.</p>
     */
    inline const FormInputCardMetadata& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const FormInputCardMetadata& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(FormInputCardMetadata&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline FormInputCardInput& WithMetadata(const FormInputCardMetadata& value) { SetMetadata(value); return *this;}
    inline FormInputCardInput& WithMetadata(FormInputCardMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute mode of the form input card. This property determines whether
     * individual participants of a data collection session can submit multiple
     * response or one response. A compute mode of <code>append</code> shall allow
     * participants to submit the same form multiple times with different values. A
     * compute mode of <code>replace</code>code&gt; shall overwrite the current value
     * for each participant.</p>
     */
    inline const InputCardComputeMode& GetComputeMode() const{ return m_computeMode; }
    inline bool ComputeModeHasBeenSet() const { return m_computeModeHasBeenSet; }
    inline void SetComputeMode(const InputCardComputeMode& value) { m_computeModeHasBeenSet = true; m_computeMode = value; }
    inline void SetComputeMode(InputCardComputeMode&& value) { m_computeModeHasBeenSet = true; m_computeMode = std::move(value); }
    inline FormInputCardInput& WithComputeMode(const InputCardComputeMode& value) { SetComputeMode(value); return *this;}
    inline FormInputCardInput& WithComputeMode(InputCardComputeMode&& value) { SetComputeMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type;
    bool m_typeHasBeenSet = false;

    FormInputCardMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    InputCardComputeMode m_computeMode;
    bool m_computeModeHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
