/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/HandshakePartyType.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Identifies a participant in a handshake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/HandshakeParty">AWS
   * API Reference</a></p>
   */
  class HandshakeParty
  {
  public:
    AWS_ORGANIZATIONS_API HandshakeParty();
    AWS_ORGANIZATIONS_API HandshakeParty(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API HandshakeParty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline HandshakeParty& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline HandshakeParty& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) for the party.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline HandshakeParty& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of party.</p>
     */
    inline const HandshakePartyType& GetType() const{ return m_type; }

    /**
     * <p>The type of party.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of party.</p>
     */
    inline void SetType(const HandshakePartyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of party.</p>
     */
    inline void SetType(HandshakePartyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of party.</p>
     */
    inline HandshakeParty& WithType(const HandshakePartyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of party.</p>
     */
    inline HandshakeParty& WithType(HandshakePartyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    HandshakePartyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
